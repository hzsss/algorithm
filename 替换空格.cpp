/*
请实现一个函数，将一个字符串中的每个空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
*/

class Solution {
public:
	void replaceSpace(char *str,int length) {
        int spaceNum = 0;
        for (int i=0; i<length; i++) {
            if (str[i] == ' ') {
                spaceNum++;
            }
        }
        for (int j=length-1; j>=0; j--) {
            if (str[j] != ' ') {
                 str[j+spaceNum*2] = str[j];
             } else {
                 spaceNum--;
                 str[j+2*spaceNum] = '%';
                 str[j+2*spaceNum+1] = '2';
                 str[j+2*spaceNum+2] = '0';
             }
         }
     }
};