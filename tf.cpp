#include <bits\stdc++.h>
using namespace std;

vector<int>GenerarVector(vector<int> A , int n);
int SumarElementosVector(vector <int> vec);
void MostrarVector(vector<int> A);

int main()
{
	vector<int> A;
    int Contador;
    int N;
	cout<<"Ingrese cantidad de elementos del vector: "<<endl;
	cin>>N;
	A=GenerarVector(A ,N);
	Contador= SumarElementosVector(A);
	
	MostrarVector(A);
	
	cout<<"La suma de los vectores es: "<<Contador<<endl;
	return 0;
}

vector<int>GenerarVector(vector<int> A , int N)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<N; i++)
	{
		e=rand()%50;
		
	A.push_back (e);
	}
	return A;
}

int SumarElementosVector(vector <int> vec)
{
	int i;
	int Contador=0;
	for(i=0; i<vec.size(); i++)
	{
		
		
			Contador+=vec[i];
		
	}
	return Contador;
}

void MostrarVector(vector <int> A)
{
	int i;
	
	for( i=0; i<A.size(); i++ )
	{
	
	cout<<A[i]<<"/";
	}
		cout<<endl;
}

