// Object: BFUIElementMinimapEnemySensorEntityData
// ClassId: 3657
// RuntimeId: 14161
// TypeInfo: 0x0000000144D97190
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/EnemySensorConfig.h"
#include "../Global/Float32.h"
#include "../GameShared/UIBlendMode.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementMinimapEnemySensorEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec3 InnerColor; // 0x130
        Core::Vec3 OuterColor; // 0x140
        CasablancaShared::BFUIMinimapWorldViewAsset MinimapWorldViewAsset; // 0x150
        CasablancaShared::EnemySensorConfig SoldierSensorConfig; // 0x158
        Float32 ValueThreshold; // 0x160
        GameShared::UIBlendMode BlendMode; // 0x164
        Float32 InnerAlpha; // 0x168
        Float32 OuterAlpha; // 0x16C
        Int32 SectorCount; // 0x170
        Float32 SectorAngleOffset; // 0x174
        Float32 AntiAliasingWidth; // 0x178
        Float32 SectorWidth; // 0x17C
        Float32 SectorSpacing; // 0x180
        Float32 OuterRadiusOffset; // 0x184
        Boolean EnableForUnspotted; // 0x188
        Boolean CullWithinViewRadius; // 0x189
        Boolean OverrideBlendMode; // 0x18A
        char pad_0x18B[0x5];
    }; // 0x190
    static_assert(sizeof(BFUIElementMinimapEnemySensorEntityData) == 0x190);
}
#pragma pack(pop)