// Object: TargetCameraComponentData
// ClassId: 1859
// RuntimeId: 59221
// TypeInfo: 0x0000000144D40450
#include "../Entity/GameComponentData.h"
#include "../GameShared/TargetCameraEntityData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class TargetCameraComponentData : public Entity::GameComponentData {
        GameShared::TargetCameraEntityData Camera; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(TargetCameraComponentData) == 0x90);
}
#pragma pack(pop)