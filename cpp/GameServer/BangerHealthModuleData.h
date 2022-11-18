// Object: BangerHealthModuleData
// ClassId: 1720
// RuntimeId: 21355
// TypeInfo: 0x0000000144E65820
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace GameServer {
    class BangerHealthModuleData : public Entity::GameComponentData {
        Float32 Health; // 0x80
        Entity::MaterialDecl MaterialPair; // 0x84
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(BangerHealthModuleData) == 0x90);
}
#pragma pack(pop)