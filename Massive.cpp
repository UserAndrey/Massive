#include <iostream>
//#include <windows.h>
#include <iomanip>

using namespace std;

void input_massive()
    {   
	    int m,n,i,j,k=0;
    
        cout<<"Input size m: ";
        cin>>m;
        
        cout<<"Input size n: ";
        cin>>n;
        
        int **a;    
        a = new int * [m];               // массив указателей (2)
        for (int i = 1; i <= m; i++)     // (3)
        a[i] = new int [n];              // инициализация указателей
        cout<<"Input massive's "<<m*n<<" elements: \n";
    	for (i=1;i<=m;i++) 
    	
		{ 
			
    	for (j=1;j<=n;j++) 
    	{
		
    	cin>>a[i][j]; 
    	k++;
        if (((m*n)-1)==k)
		 
		 cout<<"1 element left \n";
		 
		} 
		
		}
    
 
  cout<<"Got massive: \n";
  
   for (i=1;i<=m;i++)
    {
   	
    	for (j=1;j<=n;j++)
    	
    	cout<<setw(4)<<a[i][j];	
		cout<<endl;
	}
	
   for (int i=1;i<=m;i++) 
   {
   	
   	delete [] a[i];
   	
   }
   
   delete []a;
   
   }
	
int main(int argc, char *argv[])
{   
    /*SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("chcp 1251>0");*/
	input_massive ();
	return 0;
	
}