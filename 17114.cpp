#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int m, n, o, p, q, r, s, t, u, v, w;

int ms[22] = {1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0};
int ns_[22] = {0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0};
int os[22] = {0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0,
              0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0};
int ps[22] = {0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0,
              0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0};
int qs[22] = {0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0,
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0};
int rs[22] = {0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
              -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int ss[22] = {0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0,
              0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0};
int ts[22] = {0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0,
              0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0};
int us[22] = {0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0,
              0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0};
int vs[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,
              0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0};
int ws_[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1};

int total_days = -1;

queue<tuple<int, int, int, int, int, int, int, int, int, int, int>> q11;

// [w][v][u][t][s][r][q][p][o][n][m]
// [W][V][U][T][S][R][Q][P][O][N][M]

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> m >> n >> o >> p >> q >> r >> s >> t >> u >> v >> w;
  int tom[w][v][u][t][s][r][q][p][o][n][m];
  int vis[w][v][u][t][s][r][q][p][o][n][m];
  int day[w][v][u][t][s][r][q][p][o][n][m];
  for (int W = 0; W < w; W++) {
    for (int V = 0; V < v; V++) {
      for (int U = 0; U < u; U++) {
        for (int T = 0; T < t; T++) {
          for (int S = 0; S < s; S++) {
            for (int R = 0; R < r; R++) {
              for (int Q = 0; Q < q; Q++) {
                for (int P = 0; P < p; P++) {
                  for (int O = 0; O < o; O++) {
                    for (int N = 0; N < n; N++) {
                      for (int M = 0; M < m; M++) {
                        cin >> tom[W][V][U][T][S][R][Q][P][O][N][M];
                        vis[W][V][U][T][S][R][Q][P][O][N][M] = 0;
                        day[W][V][U][T][S][R][Q][P][O][N][M] = 0;
                        if (tom[W][V][U][T][S][R][Q][P][O][N][M] == 1) {
                          q11.push({W, V, U, T, S, R, Q, P, O, N, M});
                          vis[W][V][U][T][S][R][Q][P][O][N][M] = 1;
                          day[W][V][U][T][S][R][Q][P][O][N][M] = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  while (!q11.empty()) {
    int nm = get<10>(q11.front());
    int nn = get<9>(q11.front());
    int no = get<8>(q11.front());
    int np = get<7>(q11.front());
    int nq = get<6>(q11.front());
    int nr = get<5>(q11.front());
    int ns = get<4>(q11.front());
    int nt = get<3>(q11.front());
    int nu = get<2>(q11.front());
    int nv = get<1>(q11.front());
    int nw = get<0>(q11.front());
    q11.pop();
    for (int i = 0; i < 22; i++) {
      int fdm = nm + ms[i];
      int fdn = nn + ns_[i];
      int fdo = no + os[i];
      int fdp = np + ps[i];
      int fdq = nq + qs[i];
      int fdr = nr + rs[i];
      int fds = ns + ss[i];
      int fdt = nt + ts[i];
      int fdu = nu + us[i];
      int fdv = nv + vs[i];
      int fdw = nw + ws_[i];
      if (fdm >= 0 && fdn >= 0 && fdo >= 0 && fdp >= 0 && fdq >= 0 &&
          fdr >= 0 && fds >= 0 && fdt >= 0 && fdu >= 0 && fdv >= 0 &&
          fdw >= 0 && m > fdm && n > fdn && o > fdo && p > fdp && q > fdq &&
          r > fdr && s > fds && t > fdt && u > fdu && v > fdv && w > fdw &&
          !vis[fdw][fdv][fdu][fdt][fds][fdr][fdq][fdp][fdo][fdn][fdm] &&
          tom[fdw][fdv][fdu][fdt][fds][fdr][fdq][fdp][fdo][fdn][fdm] ==
              0) { // [fdw][fdv][fdu][fdt][fds][fdr][fdq][fdp][fdo][fdn][fdm]
        // [nw][nv][nu][nt][ns][nr][nq][np][no][nn][nm]
        q11.push({fdw, fdv, fdu, fdt, fds, fdr, fdq, fdp, fdo, fdn, fdm});
        vis[fdw][fdv][fdu][fdt][fds][fdr][fdq][fdp][fdo][fdn][fdm] = 1;
        tom[fdw][fdv][fdu][fdt][fds][fdr][fdq][fdp][fdo][fdn][fdm] = 2;
        day[fdw][fdv][fdu][fdt][fds][fdr][fdq][fdp][fdo][fdn][fdm] =
            day[nw][nv][nu][nt][ns][nr][nq][np][no][nn][nm] + 1;
      }
    }
  }
  for (int W = 0; W < w; W++) {
    for (int V = 0; V < v; V++) {
      for (int U = 0; U < u; U++) {
        for (int T = 0; T < t; T++) {
          for (int S = 0; S < s; S++) {
            for (int R = 0; R < r; R++) {
              for (int Q = 0; Q < q; Q++) {
                for (int P = 0; P < p; P++) {
                  for (int O = 0; O < o; O++) {
                    for (int N = 0; N < n; N++) {
                      for (int M = 0; M < m; M++) {
                        if (day[W][V][U][T][S][R][Q][P][O][N][M] >= total_days)
                          total_days = day[W][V][U][T][S][R][Q][P][O][N][M];
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  for (int W = 0; W < w; W++) {
    for (int V = 0; V < v; V++) {
      for (int U = 0; U < u; U++) {
        for (int T = 0; T < t; T++) {
          for (int S = 0; S < s; S++) {
            for (int R = 0; R < r; R++) {
              for (int Q = 0; Q < q; Q++) {
                for (int P = 0; P < p; P++) {
                  for (int O = 0; O < o; O++) {
                    for (int N = 0; N < n; N++) {
                      for (int M = 0; M < m; M++) {
                        if (tom[W][V][U][T][S][R][Q][P][O][N][M] == 0 &&
                            !vis[W][V][U][T][S][R][Q][P][O][N][M]) {
                          cout << "-1\n";
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << total_days - 1 << "\n";
  return 0;
}