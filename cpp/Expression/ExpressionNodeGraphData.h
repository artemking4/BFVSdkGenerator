// Object: ExpressionNodeGraphData
// ClassId: 1611
// RuntimeId: 33640
// TypeInfo: 0x0000000144EE7600
#include "../Core/DataContainer.h"
#include "../Expression/ExpressionPortData.h"
#include "../Expression/ExpressionPropertyData.h"
#include "../Expression/ExpressionStateData.h"
#include "../Global/ResourceRef.h"
#include "../Expression/ExpressionNopPatch.h"
#include "../Expression/ExpressionConstantReferencePatch.h"
#include "../Expression/ExpressionConstantEmptyArrayPatch.h"

#pragma pack(push, 8)
namespace Expression {
    class ExpressionNodeGraphData : public Core::DataContainer {
        ResourceRef Resource; // 0x18
        Array<Expression::ExpressionPortData> Ports; // 0x20
        Array<Expression::ExpressionPropertyData> Inputs; // 0x28
        Array<Expression::ExpressionPropertyData> Outputs; // 0x30
        Array<Expression::ExpressionStateData> States; // 0x38
        Array<Expression::ExpressionNopPatch> NopPatches; // 0x40
        Array<Expression::ExpressionConstantReferencePatch> ConstantReferencePatches; // 0x48
        Array<Expression::ExpressionConstantEmptyArrayPatch> ConstantEmptyArrayPatches; // 0x50
    }; // 0x58
    static_assert(sizeof(ExpressionNodeGraphData) == 0x58);
}
#pragma pack(pop)