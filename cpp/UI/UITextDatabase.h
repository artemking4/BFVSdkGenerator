// Object: UITextDatabase
// ClassId: 895
// RuntimeId: 48266
// TypeInfo: 0x0000000144EB3E30
#include "../Core/Asset.h"
#include "../Core/LanguageFormat.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace UI {
    class UITextDatabase : public Core::Asset {
        Core::LanguageFormat Language; // 0x20
        Guid BinaryChunk; // 0x24
        Uint32 BinaryChunkSize; // 0x34
        Guid HistogramChunk; // 0x38
        Uint32 HistogramChunkSize; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(UITextDatabase) == 0x50);
}
#pragma pack(pop)