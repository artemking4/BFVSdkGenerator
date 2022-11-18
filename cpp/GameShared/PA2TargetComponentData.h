// Object: PA2TargetComponentData
// ClassId: 1813
// RuntimeId: 11306
// TypeInfo: 0x0000000144E75D40
#include "../Entity/GameComponentData.h"
#include "../GameShared/PA2TargetProperties.h"

#pragma pack(push, 16)
namespace GameShared {
    class PA2TargetComponentData : public Entity::GameComponentData {
        GameShared::PA2TargetProperties TargetProperties; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(PA2TargetComponentData) == 0x90);
}
#pragma pack(pop)