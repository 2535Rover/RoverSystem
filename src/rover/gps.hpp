namespace gps {

struct Position {
    float latitude;
    float longitude;
};

enum class Error {
    OK,

    OPEN,
    GET_ATTR,
    SET_ATTR
};

Error init(const char* device_id);

Position get_position();
float get_heading();
bool has_fix();

}
