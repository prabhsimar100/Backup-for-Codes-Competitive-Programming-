#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, m; 
    n = 5;
    m = 3;

    cin>>n>>m;

    int allocated[n][m];

    cout<<"\nEnter allocation matrix: ";

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>allocated[i][j];
        }


    int total[n][m];

    cout<<"\nEnter total required matrix: ";

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>total[i][j];
        }

    int available[m];

    cout<<"\nEnter available resources: ";


    for(int i=0;i<m;i++)
        cin>>available[i];

    // int allocated[5][3] = { { 0, 1, 0 }, 
    //                     { 2, 0, 0 }, 
    //                     { 3, 0, 2 },  
    //                     { 2, 1, 1 }, 
    //                     { 0, 0, 2 } };
  
    // int total[5][3] = { { 7, 5, 3 },  
    //                 { 3, 2, 2 }, 
    //                 { 9, 0, 2 }, 
    //                 { 2, 2, 2 }, 
    //                 { 4, 3, 3 } };
  
    // int available[3] = { 3, 3, 2 };
  
    int i,j,k;


    int f[n], completed[n], count = 0; 
    for (k = 0; k < n; k++) 
    { 
        f[k] = 0; 
    } 
    int required[n][m];

    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < m; j++) 
            required[i][j] = total[i][j] - allocated[i][j]; 
    }

    int y = 0; 
    for (k = 0; k < 5; k++) 
    { 
        for (i = 0; i < n; i++) 
        { 
            if (f[i] == 0) 
            { 
  
                int safe = 0; 
                for (j = 0; j < m; j++) 
                { 
                    if (required[i][j] > available[j])
                    { 
                        safe = 1; 
                        break; 
                    } 
                } 
  
                if (safe == 0) 
                { 
                    completed[count++] = i; 
                    for (y = 0; y < m; y++) 
                        available[y] += allocated[i][y]; 
                    f[i] = 1; 
                } 
            } 
        } 
    } 
  
    cout<<"\nSAFE SEQUENCE is \n"<< endl; 
    for (i = 0; i < n - 1; i++) 
        cout<<"P"<<completed[i]<<"\t:\t"; 
    cout<<" P"<<completed[n - 1]<<endl; 
  
    return (0); 
}