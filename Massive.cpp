#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void input_massive()
    {   
	    int m,n,temp, i,j;
    
        cout<<"Input size m: ";
        cin>>m;
        
        cout<<"Input size n: ";
        cin>>n;
        
         int **a;    
        a = new int * [m];    // массив указателей (2)
        for (int i = 1; i <= m; i++)    // (3)
        a[i] = new int [n];     // инициализация указателей
       // a[m][n] = temp;*/
        
    	for (i=1;i<=m;i++) 
		{
    	for (j=1;j<=n;j++) 
    	cin>>a[i][j]; 
		}
    
	    
  cout<<"Got massive: \n";
   for (i=1;i<=m;i++) {
    	   for (j=1;j<=n;j++)
    	
    	cout<<setw(4)<<a[i][j];	
		cout<<endl;
		}
	
   for (int i=1;i<=m;i++) {
   	delete [] a[i];
   }
   delete []a;
}
	
int main(int argc, char *argv[])
{
	input_massive ();
	return 0;
	
}