// Object: UICampaignInfoEntityData
// ClassId: 3610
// RuntimeId: 53296
// TypeInfo: 0x0000000144D03320
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/CampaignAssetLibrary.h"
#include "../CasablancaShared/BFSpartaCampaignOperationsInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICampaignInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::CampaignAssetLibrary CampaignLibrary; // 0x28
        CasablancaShared::BFSpartaCampaignOperationsInfo SpartaCampaignOperationsInfo; // 0x30
    }; // 0x38
    static_assert(sizeof(UICampaignInfoEntityData) == 0x38);
}
#pragma pack(pop)