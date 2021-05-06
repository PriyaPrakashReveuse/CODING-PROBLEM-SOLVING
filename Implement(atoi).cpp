//atoi function takes a string(str) as argument and converts it to an integer and returns it.


int atoi(string str)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='0'&&str[i]<='9'||str[i]=='-')
            {continue;}
            else
            {return -1;}
        }
        return stoi(str);
    }
