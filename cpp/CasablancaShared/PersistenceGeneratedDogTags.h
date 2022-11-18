// Object: PersistenceGeneratedDogTags
// ClassId: 474
// RuntimeId: 33102
// TypeInfo: 0x0000000144DA2E80
#include "../CasablancaShared/DogTagsList.h"
#include "../CasablancaShared/PersistenceWeaponConfigurations.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceGeneratedDogTags : public CasablancaShared::DogTagsList {
        Array<CasablancaShared::PersistenceWeaponConfigurations> PersistenceWeaponConfigurations; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceGeneratedDogTags) == 0x28);
}
#pragma pack(pop)