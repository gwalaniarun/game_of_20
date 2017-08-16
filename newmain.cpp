#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int random (int,int);

int main()
{
    cout << "GAME OF 20"<< endl;

    int i,count,p,input,next;

    next=0;
    srand(time(0));
    for(;next<20;)
    {
        cout<<"\nInput "<<next+1<<" OR "<<next+2<<"::";
        cin>>input;

        if(input==next+1 || input==next+2)
        {
          next=random(input+1,input+2);

            if(input==20)
            {
            cout<<"You win";
            exit(0);
            }

            else if(next==20)
            {
            cout<<"YOU LOST";
            exit(0);
            }
            if(next<20){
                cout<<"COMPUTER SAYS::"<<next<<"\n";
            }
        }
    else
        {
            cout<<"ERROR IN INPUT";
            exit(0);
        }

}
}

int random (int n,int m)
{
   if(n==19 || m==20)
      {
         cout<<"COMPUTER SAYS:20\n \t YOU LOST";
                exit(0);
      }


        int inf,ans;

        ans=rand()%(m-n + 1) + m;

        return ans;





}
