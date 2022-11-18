// Object: BFUIMinimapPanLogicEntityData
// ClassId: 2301
// RuntimeId: 58842
// TypeInfo: 0x0000000144D96D90
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIMinimapPanLogicEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 MapCentre; // 0x30
        Float32 ZoomNormalised; // 0x40
        Float32 ZoomVelocity; // 0x44
        Float32 ZoomStep; // 0x48
        Float32 ZoomPerSecond; // 0x4C
        Float32 MapRadius; // 0x50
        Float32 MapRadiusMaxZoom; // 0x54
        Float32 ZoomSmoothFactor; // 0x58
        Float32 MaximumOffset; // 0x5C
        Core::Vec2 MouseCursorPosition; // 0x60
        Float32 PanSpeed; // 0x68
        Float32 PadCursorEdgePanningThreshold; // 0x6C
        Float32 PadCursorMoveSpeed; // 0x70
        Float32 PadCursorNonlinearResponse; // 0x74
        Core::Vec2 PadStickOffset; // 0x78
        Boolean IsPadControlled; // 0x80
        Boolean PadPanningHoldMode; // 0x81
        Boolean PadPanningKeepCursorPosition; // 0x82
        char pad_0x83[0xD];
    }; // 0x90
    static_assert(sizeof(BFUIMinimapPanLogicEntityData) == 0x90);
}
#pragma pack(pop)