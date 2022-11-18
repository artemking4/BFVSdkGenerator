// Object: UICurrency
// ClassId: 4144
// RuntimeId: 32563
// TypeInfo: 0x0000000144D860A0
#include "../CasablancaShared/Identifiable.h"
#include "../CasablancaShared/UICurrencyType.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICurrency : public CasablancaShared::Identifiable {
        CasablancaShared::UICurrencyType CurrencyType; // 0x18
        Int32 Value; // 0x1C
    }; // 0x20
    static_assert(sizeof(UICurrency) == 0x20);
}
#pragma pack(pop)