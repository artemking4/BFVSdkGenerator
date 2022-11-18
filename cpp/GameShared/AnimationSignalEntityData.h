// Object: AnimationSignalEntityData
// ClassId: 2057
// RuntimeId: 54975
// TypeInfo: 0x0000000144E90F60
#include "../Entity/EntityData.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationSignalEntityData : public Entity::EntityData {
        Ant::AntRef Signal; // 0x20
        Ant::AntRef IntGameState; // 0x34
        Ant::AntRef FloatGameState; // 0x48
        Int32 ValueInt; // 0x5C
        Float32 ValueFloat; // 0x60
        Boolean Reset; // 0x64
        Boolean Continuous; // 0x65
        char pad_0x66[0x2];
    }; // 0x68
    static_assert(sizeof(AnimationSignalEntityData) == 0x68);
}
#pragma pack(pop)