#include "iostream"

using namespace std;

void replace(char* mainString, char* stringToBeReplaced, char* newString)
{
    int stringToBeReplacedLength = strlen(stringToBeReplaced);
    int newStringLength = strlen(newString);
   
    for (int i = 0; mainString[i]; i++)
    {
		//look for the begging of the string that has to be replaced
        if (mainString[i] == stringToBeReplaced[0])
        {
            bool found = true;
            int currentIndexInMain = i; //save the current position in the mainString
            int idx2 = 0;

			//confirm that it's actually the word that has to be replaced
            while (stringToBeReplaced[idx2] && found)
            {
                if (mainString[currentIndexInMain] != stringToBeReplaced[idx2])
				{
					found = false;
				}
                    
                ++currentIndexInMain;
                ++idx2;
            }

			//if you are here, that means the string you want to be replaced exists
            if (found)
            {
                int mainStringLength = strlen(mainString);

                if (stringToBeReplacedLength < newStringLength)
                {
					int offset = newStringLength - stringToBeReplacedLength;
                    idx2 = 0;

					//move the chars to the right, making space for the new string
					for (int i = mainStringLength; i >= currentIndexInMain; i--)
					{
						mainString[i + offset] = mainString[i];
					}

					//copy the new string
					int begIdx = currentIndexInMain - stringToBeReplacedLength;
					for (int i = 0; i < newStringLength; i++)
					{
						mainString[begIdx] = newString[i];
						begIdx++;
					}

					i += newStringLength - 1; //continue right after the end of the newly inserted string
				}
				else
				{
					int copyOfMainIndex = i;
                    int offset = stringToBeReplacedLength - newStringLength;
					

                    while (mainString[copyOfMainIndex])
                    {
                        mainString[copyOfMainIndex] = mainString[copyOfMainIndex + offset];
                        ++copyOfMainIndex;
                    }

					copyOfMainIndex = i; //reset position
					int newStringCounter = 0;

                    while (newString[newStringCounter])
                    {
                        mainString[copyOfMainIndex] = newString[newStringCounter];
                        ++copyOfMainIndex;
                        ++newStringCounter;
                    }

					i += newStringLength - 1;
				}
            }     
        }
    }
}

int main()
{
    char str[1024] = "Ivan loves cats and dogs.";
    replace(str, "cats", "programming");
    replace(str, "dogs", "math");
	  cout << str << endl;
    return 0;
}
