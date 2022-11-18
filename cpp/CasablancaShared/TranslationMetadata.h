// Object: TranslationMetadata
// ClassId: 5238
// RuntimeId: 29893
// TypeInfo: 0x0000000144D6DFB0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/TranslationKind.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TranslationMetadata : public Core::DataContainer {
        CasablancaShared::TranslationKind Kind; // 0x18
        char pad_0x1C[0x4];
        CString TranslationId; // 0x20
    }; // 0x28
    static_assert(sizeof(TranslationMetadata) == 0x28);
}
#pragma pack(pop)