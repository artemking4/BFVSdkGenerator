// Object: DakarManagerData
// ClassId: 2577
// RuntimeId: 16406
// TypeInfo: 0x0000000144D01920
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../GameShared/UnlockAsset.h"
#include "../CasablancaShared/BFFactionId.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DakarManagerData : public Entity::EntityData {
        Int32 LocalSubFactionIndex; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 PlaneStartPosition; // 0x30
        Core::Vec3 PlaneEndPosition; // 0x40
        Core::LinearTransform PlaneCurrentPosition; // 0x50
        Core::Vec3 LineColor; // 0x90
        Array<GameShared::UnlockAsset> LootTierAssets; // 0xA0
        Array<CasablancaShared::BFFactionId> BFFactionIDs; // 0xA8
        CString PreRoundPingMarkerLocationIDOverride; // 0xB0
        Float32 DottedLineIconPadding; // 0xB8
        Float32 EndCapIconScale; // 0xBC
        Float32 LineThickness; // 0xC0
        Float32 LineAlpha; // 0xC4
        Float32 DashedLineRepeat; // 0xC8
        Float32 DashedLineRatio; // 0xCC
        Array<Guid> FactionIDs; // 0xD0
        CString ModeWinsStatCode; // 0xD8
        Uint32 TelemetryShrinkingPlayspaceSeed; // 0xE0
        Uint32 TelemetryLootSpawnSeed; // 0xE4
        Uint32 TelemetryPlaneRandomSeed; // 0xE8
        Boolean IsPlaneSpawned; // 0xEC
        char pad_0xED[0x3];
    }; // 0xF0
    static_assert(sizeof(DakarManagerData) == 0xF0);
}
#pragma pack(pop)