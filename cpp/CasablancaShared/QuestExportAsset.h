// Object: QuestExportAsset
// ClassId: 676
// RuntimeId: 64072
// TypeInfo: 0x0000000144DA0DE0
#include "../Core/Asset.h"
#include "../CasablancaShared/QuestServiceProduct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class QuestExportAsset : public Core::Asset {
        Array<CasablancaShared::QuestServiceProduct> QuestServiceProducts; // 0x20
    }; // 0x28
    static_assert(sizeof(QuestExportAsset) == 0x28);
}
#pragma pack(pop)