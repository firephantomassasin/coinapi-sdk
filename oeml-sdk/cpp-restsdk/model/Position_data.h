/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Position_data.h
 *
 * The Position object.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Position_data_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Position_data_H_


#include "../ModelBase.h"

#include "OrdSide.h"
#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// The Position object.
/// </summary>
class  Position_data
    : public ModelBase
{
public:
    Position_data();
    virtual ~Position_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Position_data members

    /// <summary>
    /// Exchange symbol.
    /// </summary>
    utility::string_t getSymbolIdExchange() const;
    bool symbolIdExchangeIsSet() const;
    void unsetSymbol_id_exchange();

    void setSymbolIdExchange(const utility::string_t& value);

    /// <summary>
    /// CoinAPI symbol.
    /// </summary>
    utility::string_t getSymbolIdCoinapi() const;
    bool symbolIdCoinapiIsSet() const;
    void unsetSymbol_id_coinapi();

    void setSymbolIdCoinapi(const utility::string_t& value);

    /// <summary>
    /// Calculated average price of all fills on this position.
    /// </summary>
    double getAvgEntryPrice() const;
    bool avgEntryPriceIsSet() const;
    void unsetAvg_entry_price();

    void setAvgEntryPrice(double value);

    /// <summary>
    /// The current position quantity.
    /// </summary>
    double getQuantity() const;
    bool quantityIsSet() const;
    void unsetQuantity();

    void setQuantity(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OrdSide> getSide() const;
    bool sideIsSet() const;
    void unsetSide();

    void setSide(const std::shared_ptr<OrdSide>& value);

    /// <summary>
    /// Unrealised profit or loss (PNL) of this position.
    /// </summary>
    double getUnrealizedPnl() const;
    bool unrealizedPnlIsSet() const;
    void unsetUnrealized_pnl();

    void setUnrealizedPnl(double value);

    /// <summary>
    /// Leverage for this position reported by the exchange.
    /// </summary>
    double getLeverage() const;
    bool leverageIsSet() const;
    void unsetLeverage();

    void setLeverage(double value);

    /// <summary>
    /// Is cross margin mode enable for this position?
    /// </summary>
    bool isCrossMargin() const;
    bool crossMarginIsSet() const;
    void unsetCross_margin();

    void setCrossMargin(bool value);

    /// <summary>
    /// Liquidation price. If mark price will reach this value, the position will be liquidated.
    /// </summary>
    double getLiquidationPrice() const;
    bool liquidationPriceIsSet() const;
    void unsetLiquidation_price();

    void setLiquidationPrice(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getRawData() const;
    bool rawDataIsSet() const;
    void unsetRaw_data();

    void setRawData(const std::shared_ptr<Object>& value);


protected:
    utility::string_t m_Symbol_id_exchange;
    bool m_Symbol_id_exchangeIsSet;
    utility::string_t m_Symbol_id_coinapi;
    bool m_Symbol_id_coinapiIsSet;
    double m_Avg_entry_price;
    bool m_Avg_entry_priceIsSet;
    double m_Quantity;
    bool m_QuantityIsSet;
    std::shared_ptr<OrdSide> m_Side;
    bool m_SideIsSet;
    double m_Unrealized_pnl;
    bool m_Unrealized_pnlIsSet;
    double m_Leverage;
    bool m_LeverageIsSet;
    bool m_Cross_margin;
    bool m_Cross_marginIsSet;
    double m_Liquidation_price;
    bool m_Liquidation_priceIsSet;
    std::shared_ptr<Object> m_Raw_data;
    bool m_Raw_dataIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Position_data_H_ */
