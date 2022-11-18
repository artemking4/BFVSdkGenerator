// Object: LevelDescriptionAsset
// ClassId: 541
// RuntimeId: 38204
// TypeInfo: 0x0000000144E782C0
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../GameShared/LevelDescriptionInclusionCategory.h"
#include "../GameShared/LevelDescription.h"
#include "../GameShared/LevelBundleLoad.h"
#include "../GameShared/LevelStartPoint.h"
#include "../GameShared/OnDemandBundle.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace GameShared {
    class LevelDescriptionAsset : public Core::Asset {
        CString LevelName; // 0x20
        Array<GameShared::LevelDescriptionInclusionCategory> Categories; // 0x28
        GameShared::LevelDescription Description; // 0x30
        Array<GameShared::LevelBundleLoad> Bundles; // 0x58
        Array<GameShared::LevelStartPoint> StartPoints; // 0x60
        Array<CString> SuperBundles; // 0x68
        Array<GameShared::OnDemandBundle> OnDemandBundles; // 0x70
        Guid LevelGuid; // 0x78
    }; // 0x88
    static_assert(sizeof(LevelDescriptionAsset) == 0x88);
}
#pragma pack(pop)