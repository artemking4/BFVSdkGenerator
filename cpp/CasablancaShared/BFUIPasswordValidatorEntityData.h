// Object: BFUIPasswordValidatorEntityData
// ClassId: 2331
// RuntimeId: 34076
// TypeInfo: 0x0000000144D873A0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPasswordValidatorEntityData : public Entity::EntityData {
        CString PasswordInput; // 0x20
        Uint32 MinPasswordLength; // 0x28
        Uint32 MaxPasswordLength; // 0x2C
    }; // 0x30
    static_assert(sizeof(BFUIPasswordValidatorEntityData) == 0x30);
}
#pragma pack(pop)