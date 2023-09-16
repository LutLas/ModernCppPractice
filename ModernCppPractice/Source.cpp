#include <cstdio>

struct RatThing {
    static int rat_things_power; //➊
        static/*➋*/ void power_up_rat_thing(int nuclear_isotopes) {
        rat_things_power/*➌*/ = rat_things_power + nuclear_isotopes;
        const auto waste_heat = rat_things_power * 20;
        if (waste_heat > 10000) {
            printf("Warning! Hot doggie!\n");
        }
        printf("Rat-thing power: %d\n", rat_things_power);
    }
};

int RatThing::rat_things_power = 200; //➍

int main() {
    RatThing::power_up_rat_thing(100); //➎
        RatThing::power_up_rat_thing(500);
}