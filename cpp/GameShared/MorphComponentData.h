// Object: MorphComponentData
// ClassId: 1809
// RuntimeId: 4174
// TypeInfo: 0x0000000144E66740
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 16)
namespace GameShared {
    class MorphComponentData : public Entity::GameComponentData {
        Entity::ObjectBlueprint MeshBlueprint; // 0x80
        Ant::AntRef DofSet; // 0x88
        Boolean Enabled; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(MorphComponentData) == 0xA0);
}
#pragma pack(pop)