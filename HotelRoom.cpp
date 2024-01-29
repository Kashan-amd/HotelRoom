#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Room {
    string type;
    int price;
    int availability;
};

class Hotel {
    public:
        string name;
        string location;
        vector<Room> rooms;

        void add_room(Room room) {}

        void display_rooms() {}
        void book_room() {}
        void view_details() {}
        void search_hotels() {}
};

int main{

	Room single_room = {"Single", 50, 10};
    Room double_room = {"Double", 75, 5};

    Hotel hotel;
    hotel.name = "My Hotel";
    hotel.location = "Somewhere, ABC";
    hotel.add_room(single_room);
    hotel.add_room(double_room);

    cout << "Welcome to " << hotel.name << " in " << hotel.location << "!" << endl;
    cout << endl;

    cout << "Available Rooms:" << endl;
    hotel.display_rooms();
    hotel.book_room();
    hotel.view_details();
	hotel.search_hotels();
    return 0;

}
