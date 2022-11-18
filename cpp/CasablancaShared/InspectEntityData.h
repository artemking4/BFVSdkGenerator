// Object: InspectEntityData
// ClassId: 2807
// RuntimeId: 20823
// TypeInfo: 0x0000000144D2A120
#include "../Entity/EntityData.h"
#include "../GameShared/TargetCameraData.h"
#include "../CasablancaShared/InspectViewPointData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Ant/AntRef.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class InspectEntityData : public Entity::EntityData {
        Array<GameShared::TargetCameraData> Cameras; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 CenterOffset; // 0x30
        Array<CasablancaShared::InspectViewPointData> ViewPoints; // 0x40
        Float32 MinLookAtHeight; // 0x48
        Float32 MaxLookAtHeight; // 0x4C
        Float32 MinDistance; // 0x50
        Float32 MaxDistance; // 0x54
        Float32 ZoomScrollSpeed; // 0x58
        Float32 ZoomScrollAcceleration; // 0x5C
        Ant::AntRef AnimationSignal; // 0x60
        char pad_0x74[0x4];
        CString UIName; // 0x78
    }; // 0x80
    static_assert(sizeof(InspectEntityData) == 0x80);
}
#pragma pack(pop)