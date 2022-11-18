// Object: AssetListData
// ClassId: 919
// RuntimeId: 46687
// TypeInfo: 0x0000000144DB2F60
#include "../Core/DataContainer.h"
#include "../Core/Asset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AssetListData : public Core::DataContainer {
        Array<Core::Asset> AssetList; // 0x18
    }; // 0x20
    static_assert(sizeof(AssetListData) == 0x20);
}
#pragma pack(pop)