// Object: ExpressionFunctionTypeInfoAsset
// ClassId: 859
// RuntimeId: 49705
// TypeInfo: 0x0000000144EE7680
#include "../Core/FunctionTypeInfoAsset.h"
#include "../Expression/ExpressionNodeGraphData.h"

#pragma pack(push, 8)
namespace Expression {
    class ExpressionFunctionTypeInfoAsset : public Core::FunctionTypeInfoAsset {
        Expression::ExpressionNodeGraphData GraphData; // 0x50
    }; // 0x58
    static_assert(sizeof(ExpressionFunctionTypeInfoAsset) == 0x58);
}
#pragma pack(pop)