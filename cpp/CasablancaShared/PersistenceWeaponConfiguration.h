// Object: PersistenceWeaponConfiguration
// ClassId: 625
// RuntimeId: 51634
// TypeInfo: 0x0000000144DA2A00
#include "../Core/Asset.h"
#include "../DicePersistenceShared/PersistenceCategorizationData.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../CasablancaShared/PersistenceWeaponConfigurationSetup.h"
#include "../CasablancaShared/WeaponSpecialAssignmentTrack.h"
#include "../UI/LocalizedStringBase.h"
#include "../CasablancaShared/WeaponDogTag.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceWeaponConfiguration : public Core::Asset {
        DicePersistenceShared::PersistenceCategorizationData Categorization; // 0x20
        DicePersistenceShared::StatCategoryData Category; // 0x28
        CasablancaShared::PersistenceWeaponConfigurationSetup Setup; // 0x30
        Array<CasablancaShared::WeaponSpecialAssignmentTrack> SpecialAssignmentTracks; // 0x38
        UI::LocalizedStringBase DogTagDescriptionSidId; // 0x40
        UI::LocalizedStringBase DogTagCriteriaDescriptionSidId; // 0x48
        Array<CasablancaShared::WeaponDogTag> DogTags; // 0x50
    }; // 0x58
    static_assert(sizeof(PersistenceWeaponConfiguration) == 0x58);
}
#pragma pack(pop)