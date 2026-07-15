class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            char arr[10]={0};
            for(int j=0;j<9;j++)
            {
                char num=board[i][j];
                if(num=='.') continue;
                int idx=num-'0';
                arr[idx]++;


            }
            for(int k=0;k<=9;k++)
            {
                if(arr[k]>1)
                {
                    return false;
                }
            }


        }
        for(int i=0;i<9;i++)
        {
            char arr[10]={0};

            for(int j=0;j<9;j++)
            {
                char num=board[j][i];
                if(num=='.') continue;
                int idx=num-'0';
                arr[idx]++;



            }
            for(int k=0;k<=9;k++)
            {
                if(arr[k]>1)
                {
                    return false;
                }
            }


        }
        //row & col done
        // now 3*3
        for(int i=0;i<9;i++)
        {
            int arr[10]={0};
            int rowOffset = (i / 3) * 3;
            int colOffset = (i % 3) * 3;
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    char num=board[rowOffset+j][colOffset+k];
                    if(num=='.') continue;
                    int id=num-'0';
                    arr[id]++;

                }


            }
            for(int e=0;e<=9;e++)
            {
                if(arr[e]>1)
                {
                    return false;
                }
            }
        }

        return true;
        
    }
};
