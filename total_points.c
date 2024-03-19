//19 Maret 2024
//https://www.codewars.com/kata/5bb904724c47249b10000131/c

int points(const char* const games[10]) {

    // <---- hajime!
  int x, y;
  int points = 0;
  for(int i = 0; i < 10; i++){
    x = games[i][0];
    y = games[i][2];
    if(x > y){
      points += 3;
    }else if(x == y){
      points++;
    }
  }
  return points;
}