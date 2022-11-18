// Object: SpartaFeatureFlagsEntityData
// ClassId: 3239
// RuntimeId: 60573
// TypeInfo: 0x0000000144D30DA0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpartaFeatureFlagsEntityData : public Entity::EntityData {
        Array<CString> EnabledFlags; // 0x20
    }; // 0x28
    static_assert(sizeof(SpartaFeatureFlagsEntityData) == 0x28);
}
#pragma pack(pop)