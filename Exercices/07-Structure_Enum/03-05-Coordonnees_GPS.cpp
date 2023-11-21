//
// Created by enigma on 18.11.23.
//

enum class Dir_NS {N, S};
enum class Dir_EW {E, W};

struct DMS{
    int degre;
    int minute;
    double seconde;
};

struct DMS_Latitude{
    Dir_NS direction;
    DMS dms;
};

struct DMS_Longitude{
    Dir_EW direction;
    DMS dms;
};

struct Coord_DMS {
    DMS_Latitude latitude;
    DMS_Longitude longitude;
};

struct Coord_DD {
    double latitude, longitude;
};

Coord_DMS coord_DD_to_DMS(Coord_DD coord){
    Coord_DMS output;

    double latitude = coord.latitude;
    double longitude = coord.longitude;

    output.latitude.dms.degre = static_cast<int>(latitude);
    output.longitude.dms.degre = static_cast<int>(longitude);

    output.latitude.dms.minute = static_cast<int>((latitude - static_cast<int>(latitude))*60);
    output.longitude.dms.minute = static_cast<int>((longitude - static_cast<int>(longitude))*60);

    output.latitude.dms.seconde = ((latitude-static_cast<int>(latitude))*60) - static_cast<int>((latitude-static_cast<int>(latitude))*60) *60;
    output.longitude.dms.seconde = ((longitude-static_cast<int>(longitude))*60) - static_cast<int>((longitude-static_cast<int>(longitude))*60) *60;
}
void afficher_DMS(){

}

void afficher_DD(){

}