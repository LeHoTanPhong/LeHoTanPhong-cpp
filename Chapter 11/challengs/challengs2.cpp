#include <iostream>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int release_year;
    int runtime;
    int production_cost;
    int first_year_revenue;
};

void DisplayMovieData( const MovieData &movie)
{
    cout <<" Tieu de: " << movie.title << endl;
    cout <<" Dao dien: " << movie.director << endl;
    cout <<" Nam phat hanh: " << movie.release_year << endl;
    cout <<" Thoi gian chay: " << movie.runtime <<" phut" << endl;
    cout <<" Chi phi san xuat: " << movie.production_cost << endl;
    cout <<" Doanh thu nam dau tien: " << movie.first_year_revenue << endl;
    cout <<" Lai lo nam dau tien: " << movie.first_year_revenue - movie.production_cost << " trieu do"  << endl;
}
 int main()
 {
    MovieData movie1;
    movie1.title = " The Shawshark Redemption";
    movie1.director = "  Franl Darabont";
    movie1.release_year =  1994;
    movie1.runtime =  142;
    movie1.production_cost = 25;
    movie1.first_year_revenue = 165;

    MovieData movie2;
    movie2.title = " The Godfather";
    movie2.director = " Francis Ford Coppola";
    movie2.release_year = 1972;
    movie2.runtime = 175;
    movie2.production_cost = 6;
    movie2.first_year_revenue = 135;

    DisplayMovieData(movie1);

    DisplayMovieData(movie2);

    return 0;
 }