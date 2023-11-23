#include <iostream>

using namespace std;

struct MovieData {
  string title;
  string director;
  int release_year;
  int runtime;
};

void DisplayMovieData(const MovieData &movie) {
  cout << "Tieu de: " << movie.title << endl;
  cout << "Dao dien: " << movie.director << endl;
  cout << "Nam phat hanh: " << movie.release_year << endl;
  cout << "Thoi gian chay: " << movie.runtime << " phut" << endl;
}

int main() {
  // Tạo biến MovieData đầu tiên
  MovieData movie1;
  movie1.title = "The Shawshank Redemption";
  movie1.director = "Frank Darabont";
  movie1.release_year = 1994;
  movie1.runtime = 142;

  // Tạo biến MovieData thứ hai
  MovieData movie2;
  movie2.title = "The Godfather";
  movie2.director = "Francis Ford Coppola";
  movie2.release_year = 1972;
  movie2.runtime = 175;

  // Hiển thị thông tin về bộ phim đầu tiên
  DisplayMovieData(movie1);

  // Hiển thị thông tin về bộ phim thứ hai
  DisplayMovieData(movie2);

  return 0;
}
