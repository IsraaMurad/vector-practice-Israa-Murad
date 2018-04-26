#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <time.h>

using namespace std;

vector<float> read();

float avrege(vector<float>& n);

int pick_random_number(int min_nom, int max_nom);

void fill_vector(vector<int>& any);

void end_of_array(vector<int>& emp);

void print_out_array(vector<int>& we);

void insert_randomly(vector<int>& pr);

void erase_randomly(vector<int>& de);

void change_randomly(vector<int>& q);

int main()
{
/*  vector<float> v;
    cout<<v.empty() << endl << v.capacity();

    v[0]=45;
    cout<< v[0]<<endl;

    v.resize(23);
    cout<<v.size();

    v=read();
    cout<< avrege(v);
*/
//    srand(time())

    return 0;
}
vector<float> read()
{
    float d;
    cout<< "length of array"<<endl;
    cin>>d;
    cout<< "numbers are" << endl;
    vector<float> n;
    n.resize(d);
    for (int i=0; i<d; i++)
    {
        cin>>n[i];
    }
    return n;
}

float avrege(vector<float>& n)
{
    float sum= 0;
    float av;

    for (int i=0; i<n.size(); i++)
    {

        sum+=n[i];
    }
    av=sum/(float)n.size();

    return av;
}

int pick_random_number(int min_num, int max_num)
{
    int n = max_num-min_num+1;
    return rand()%n+min_num;
}

void fill_vector(vector<int>& any)
{
    any.resize(pick_random_number(10,99));
    for (int i=0; i<any.size(); i++)
    {
        any[i]= pick_random_number(4,93);
    }
}

void end_of_array(vector<int>& emp)
{

    while(pick_random_number(0,4))
    {
        emp.push_back(pick_random_number(0,50));
    }
}

void print_out_array(const vector<int>& we)
{
    //vector<int>::const_iterator i;
    for (auto i=we.begin(); i!=we.end(); i++)
    {
        cout<< *i<<endl;
    }
}

void insert_randomly(vector<int>& pr)
{
    for (auto i=pr.begin(); i!=pr.end(); i++)
    {
        if(!pick_random_number(0,3))
        {
            pr.insert(i,1000000/*pick_random_number(0,10)*/);

        }
    }
}

void erase_randomly(vector<int>& de)
{
    for (auto i=de.begin(); i!=de.end(); i++)
    {
        if(!pick_random_number(0,3))
        {
            de.erase(i);

        }
    }
}

void change_randomly(vector<int>& q)
{
    for (auto i=q.begin(); i!=q.end(); i++)
    {
        *i=pick_random_number(0,6);
    }

}
