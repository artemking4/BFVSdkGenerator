// Object: UIMetaDataPipelineResultObject
// ClassId: 5471
// RuntimeId: 48355
// TypeInfo: 0x0000000144D9A190
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIMetaDataSeenEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMetaDataPipelineResultObject : public Core::DataContainer {
        Array<CasablancaShared::UIMetaDataSeenEntry> SeenEntries; // 0x18
    }; // 0x20
    static_assert(sizeof(UIMetaDataPipelineResultObject) == 0x20);
}
#pragma pack(pop)