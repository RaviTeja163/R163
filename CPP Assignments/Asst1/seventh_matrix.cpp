#include<iostream>
using namespace std;

class Matrix{
    int **mat,rows,columns;
public:
    void read_matrix()
    {
        int r,c;
        cout<<"Enter the number of rows and columns\n";
        cin >> r >> c;
        rows=r;
        columns=c;
        mat = new int*[rows];
        cout<<"Enter the elemnts\n";
	    int i,j;                      //iterators
        for (i = 0; i < rows; i++)
	    {
            mat[i] = new int[columns];
		    for (j = 0; j < columns; j++)
                cin >> mat[i][j];
        }
    }

friend void mult(Matrix &m1,int s);
};

void mult(Matrix &m1,int s)
{
    int i,j;                        //iterators
    for (i = 0; i < m1.rows; i++)
    {
        for (j = 0; j < m1.columns; j++)
            m1.mat[i][j]=m1.mat[i][j]*s;
    }
    cout<<"Multiplied matrix:\n";
    for (i = 0; i < m1.rows; i++)
    {
        for (j = 0; j < m1.columns; j++)
            cout<<m1.mat[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    Matrix m;
    int scalar;
    m.read_matrix();

    cout<<"Enter the scalar to be multiplied\n";
    cin>>scalar;
    mult(m,scalar);

    return 0;
}
