// https://www.hackerrank.com/challenges/magic-spells/problem
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
    if(dynamic_cast<Fireball*>(spell) != nullptr) {
        dynamic_cast<Fireball*>(spell) -> revealFirepower();
    } 
    else if(dynamic_cast<Frostbite*>(spell) != nullptr) {
        dynamic_cast<Frostbite*>(spell) -> revealFrostpower();
    } 
    else if(dynamic_cast<Thunderstorm*>(spell) != nullptr) {
        dynamic_cast<Thunderstorm*>(spell) -> revealThunderpower();
    } 
    else if(dynamic_cast<Waterbolt*>(spell) != nullptr) {
        dynamic_cast<Waterbolt*>(spell) -> revealWaterpower();
    } 
    else {
        // Longest Common Subsequence
        string genSpell = SpellJournal::read();
        int m = genSpell.length();
        string scrollName = spell -> revealScrollName();
        int n = scrollName.length();
        
        // 2D matrix of size m + 1, n + 1 with 1st row and column filled with zeroes
        int dp[2][n + 1];
        for(int i = 0; i <= n; i++) {
            dp[0][i] = 0;
        }
        dp[1][0] = 0;
        
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(genSpell[i - 1] == scrollName[j - 1]) {
                    dp[i % 2][j] = 1 + dp[!(i % 2)][j - 1];
                }
                else {
                    dp[i % 2][j] = max(dp[!(i % 2)][j], dp[i % 2][j - 1]);
                }
            }
        }
        cout << dp[m % 2][n] << endl;
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}