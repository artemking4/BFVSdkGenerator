// Object: FbProxyControllerEntityData
// ClassId: 2739
// RuntimeId: 55698
// TypeInfo: 0x0000000144E6DAD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/FbProxyControllerEntityBinding.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class FbProxyControllerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::FbProxyControllerEntityBinding CannedAnimBinding; // 0x24
        Int32 AnimationEntitySpacePriority; // 0x74
        Ant::AntRef PointerGameState; // 0x78
        Boolean AlwaysClearEntitySpaceWhenInScenario; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(FbProxyControllerEntityData) == 0x90);
}
#pragma pack(pop)