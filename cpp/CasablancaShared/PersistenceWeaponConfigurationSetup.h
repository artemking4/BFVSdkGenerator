// Object: PersistenceWeaponConfigurationSetup
// ClassId: 626
// RuntimeId: 39269
// TypeInfo: 0x0000000144DA2A80
#include "../Core/Asset.h"
#include "../DicePersistenceShared/RankGateListAsset.h"
#include "../CasablancaShared/PersistenceStatAxiomTemplate.h"
#include "../DiceSvgRasterizerShared/SvgImage.h"
#include "../Render/TextureAsset.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../CasablancaShared/WeaponSpecialAssignmentTimeScopesSetup.h"
#include "../CasablancaShared/PersistenceStatAxiomTemplates.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceWeaponConfigurationSetup : public Core::Asset {
        DicePersistenceShared::RankGateListAsset RankGateList; // 0x20
        CasablancaShared::PersistenceStatAxiomTemplate RankScoringAxiomTemplate; // 0x28
        CasablancaShared::PersistenceStatAxiomTemplate DogTagAxiomTemplate; // 0x30
        DiceSvgRasterizerShared::SvgImage SpecialAssigmentsSvgImage; // 0x38
        Render::TextureAsset SpecialAssigmentsImage; // 0x40
        DicePersistenceShared::StatCategoryData StatCategoryPlaceholder; // 0x48
        CasablancaShared::WeaponSpecialAssignmentTimeScopesSetup TimeScopes; // 0x50
        Array<CasablancaShared::PersistenceStatAxiomTemplates> AxiomTemplates; // 0x68
    }; // 0x70
    static_assert(sizeof(PersistenceWeaponConfigurationSetup) == 0x70);
}
#pragma pack(pop)