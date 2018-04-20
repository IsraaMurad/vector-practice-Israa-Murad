#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

using namespace std;

vector<int> read();
float avrege(vector<int>& n);

int main()
{
    vector<int> v;
    /*cout<<v.empty() << endl << v.capacity();

    v[0]=45;
    cout<< v[0]<<endl;

    v.resize(23);
    cout<<v.size();
    */
    v=read();
    cout<< avrege(v);

    return 0;
}
vector<int> read()
{
    int d;
    cout<< "length of array"<<endl;
    cin>>d;
    cout<< "numbers are" << endl;
    vector<int> n;
    n.resize(d);
    for (int i=0; i<d; i++)
    {
        cin>>n[i];
    }
    return n;
}

float avrege(vector<int>& n)
{
    int sum= 0;
    float av;

    for (int i=0; i<n.size(); i++)
    {

        sum+=n[i];
    }
    av=(float)sum/(float)n.size();

    return av;
}
