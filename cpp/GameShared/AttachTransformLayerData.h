// Object: AttachTransformLayerData
// ClassId: 4065
// RuntimeId: 23734
// TypeInfo: 0x0000000144E9DB50
#include "../Timeline/TransformLayerData.h"
#include "../Entity/GameObjectData.h"
#include "../Core/LinearTransform.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"

#pragma pack(push, 16)
namespace GameShared {
    class AttachTransformLayerData : public Timeline::TransformLayerData {
        Core::LinearTransform AttachOffset; // 0x40
        Entity::GameObjectData AttachEntity; // 0x80
        CString ChildBoneName; // 0x88
        CString ParentBoneName; // 0x90
        Array<Guid> AttachEntityGuidChain; // 0x98
        Boolean UseAnimatableRoot; // 0xA0
        Boolean AlignAxisX; // 0xA1
        Boolean AlignAxisY; // 0xA2
        Boolean AlignAxisZ; // 0xA3
        char pad_0xA4[0xC];
    }; // 0xB0
    static_assert(sizeof(AttachTransformLayerData) == 0xB0);
}
#pragma pack(pop)