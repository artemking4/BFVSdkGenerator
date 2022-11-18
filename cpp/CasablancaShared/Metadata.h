// Object: Metadata
// ClassId: 4299
// RuntimeId: 56614
// TypeInfo: 0x0000000144D6DF30
#include "../Core/DataContainer.h"
#include "../CasablancaShared/TranslationMetadata.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class Metadata : public Core::DataContainer {
        Array<CasablancaShared::TranslationMetadata> Translations; // 0x18
    }; // 0x20
    static_assert(sizeof(Metadata) == 0x20);
}
#pragma pack(pop)