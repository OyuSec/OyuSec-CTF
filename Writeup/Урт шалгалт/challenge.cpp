#include <bits/stdc++.h>
#include <sys/ptrace.h>

using namespace std;

// Declaring global variables;

vector<int> keys(32);
string in;

inline int hint(int a)
{
  // Trap hidden function
  cout << "[+] Finding flag please wait\n";
  while (true)
  {
    a += a;
    return hint(a);
  }
}

inline void init()
{
  // Seeding, then player can predict
  srand(1337);
  for (int _ = 0; _ < 32; _++)
    keys[_] = rand() % 100;
}

inline void checkFlag()
{
  // Challenge part
  for (int _ = 0; _ < in.length(); _++)
  {
    if (in[_] >= 48 && in[_] <= 125)
    {
      continue;
    }
    else
    {
      cout << "Looks bad";
      return;
    }
  }
  if (keys[0] + keys[6] == in[0])
  {
    if (keys[2] << 2 == in[1])
    {
      if (keys[3] ^ 54 == in[2])
      {
        if (keys[3] ^ keys[8] == in[3])
        {
          if (keys[4] + 29 == in[4])
          {
            if (in[5] == 99)
            {
              if (in[6] == keys[0] + 8)
              {
                if (in[7] == keys[7] + 6)
                {
                  if (in[8] ^ 51 == 0)
                  {
                    if (in[9] - keys[9] == 19)
                    {
                      if (in[10] == 95)
                      {
                        if (in[10] >> 2 == 23)
                        {
                          if ((in[11] * 3 - 77) / 4 == 22)
                          {
                            if (in[31] == 125)
                            {
                              if (in[12] == keys[27])
                              {
                                if (in[13] + 23 == in[21])
                                {
                                  if (in[14] == keys[13])
                                  {
                                    if (in[15] % 2 == 0)
                                    {
                                      if (in[15] / 2 == keys[11])
                                      {
                                        if (in[16] == in[15] / 2)
                                        {
                                          if (in[17] == in[10])
                                          {
                                            if (in[17] == in[26])
                                            {
                                              if (in[17] == in[20])
                                              {
                                                if (in[18] == keys[17] ^ 104)
                                                {
                                                  if (in[19] << 2 == 328)
                                                  {
                                                    if (in[21] == in[5])
                                                    {
                                                      if (in[22] - 27 == keys[1])
                                                      {
                                                        if (in[23] * 2 == 112)
                                                        {
                                                          if (in[24] == in[8])
                                                          {
                                                            if (in[24] == in[14])
                                                            {
                                                              if (in[25] / 2 == keys[28])
                                                              {
                                                                if (in[27] / 5 == 16)
                                                                {
                                                                  if (in[28] ^ 117 == 0)
                                                                  {
                                                                    if (in[29] - 7 == keys[23])
                                                                    {
                                                                      if (in[30] == keys[30] + keys[14])
                                                                      {
                                                                        /* 
                                                                              If we print something like "Correct"
                                                                              player can use angr to solve this easily
                                                                              our goal is z3 or something, It doesn't matter
                                                                              what to print if player comes here it means
                                                                              already got a flag
                                                                          */
                                                                        cout << "hmm";
                                                                      }
                                                                      else
                                                                        cout << "hmm";
                                                                    }
                                                                    else
                                                                      cout << "hmm";
                                                                  }
                                                                  else
                                                                    cout << "hmm";
                                                                }
                                                                else
                                                                  cout << "hmm";
                                                              }
                                                              else
                                                                cout << "hmm";
                                                            }
                                                            else
                                                              cout << "hmm";
                                                          }
                                                          else
                                                            cout << "hmm";
                                                        }
                                                        else
                                                          cout << "hmm";
                                                      }
                                                      else
                                                        cout << "hmm";
                                                    }
                                                    else
                                                      cout << "hmm";
                                                  }
                                                  else
                                                    cout << "hmm";
                                                }
                                                else
                                                  cout << "hmm";
                                              }
                                              else
                                                cout << "hmm";
                                            }
                                            else
                                              cout << "hmm";
                                          }
                                          else
                                            cout << "hmm";
                                        }
                                        else
                                          cout << "hmm";
                                      }
                                      else
                                        cout << "hmm";
                                    }
                                    else
                                      cout << "hmm";
                                  }
                                  else
                                    cout << "hmm";
                                }
                                else
                                  cout << "hmm";
                              }
                              else
                                cout << "hmm";
                            }
                            else
                              cout << "hmm";
                          }
                          else
                            cout << "hmm";
                        }
                        else
                          cout << "hmm";
                      }
                      else
                        cout << "hmm";
                    }
                    else
                      cout << "hmm";
                  }
                  else
                    cout << "hmm";
                }
                else
                  cout << "hmm";
              }
              else
                cout << "hmm";
            }
            else
              cout << "hmm";
          }
          else
            cout << "hmm";
        }
        else
          cout << "hmm";
      }
      else
        cout << "hmm";
    }
    else
      cout << "hmm";
  }
  else
    cout << "hmm";
  cout << '\n';
}

inline void intro()
{
  cout << "[+] Define yourself: ";
  cin >> in;
}

// Compile me with: g++ -static <name>.cpp -o challenge
int main()
{
  // We can check debugger in producation
  // if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) 
  // {
  //     cout << "[-] We don't do that here\n";
  // }
  init();
  intro();
  checkFlag();

  return 0;
}
