// Object: WaypointComponentData
// ClassId: 1921
// RuntimeId: 18512
// TypeInfo: 0x0000000144C7D700
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class WaypointComponentData : public Entity::GameComponentData {
        Boolean Looping; // 0x80
        char pad_0x81[0xF];
    }; // 0x90
    static_assert(sizeof(WaypointComponentData) == 0x90);
}
#pragma pack(pop)