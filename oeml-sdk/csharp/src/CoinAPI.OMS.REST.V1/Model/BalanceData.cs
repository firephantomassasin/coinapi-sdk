/*
 * OEML - REST API
 *
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = CoinAPI.OMS.REST.V1.Client.OpenAPIDateConverter;

namespace CoinAPI.OMS.REST.V1.Model
{
    /// <summary>
    /// BalanceData
    /// </summary>
    [DataContract]
    public partial class BalanceData :  IEquatable<BalanceData>, IValidatableObject
    {
        /// <summary>
        /// Source of the last modification. 
        /// </summary>
        /// <value>Source of the last modification. </value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum LastUpdatedByEnum
        {
            /// <summary>
            /// Enum INITIALIZATION for value: INITIALIZATION
            /// </summary>
            [EnumMember(Value = "INITIALIZATION")]
            INITIALIZATION = 1,

            /// <summary>
            /// Enum BALANCEMANAGER for value: BALANCE_MANAGER
            /// </summary>
            [EnumMember(Value = "BALANCE_MANAGER")]
            BALANCEMANAGER = 2,

            /// <summary>
            /// Enum EXCHANGE for value: EXCHANGE
            /// </summary>
            [EnumMember(Value = "EXCHANGE")]
            EXCHANGE = 3

        }

        /// <summary>
        /// Source of the last modification. 
        /// </summary>
        /// <value>Source of the last modification. </value>
        [DataMember(Name="last_updated_by", EmitDefaultValue=false)]
        public LastUpdatedByEnum? LastUpdatedBy { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="BalanceData" /> class.
        /// </summary>
        /// <param name="assetIdExchange">Exchange currency code..</param>
        /// <param name="assetIdCoinapi">CoinAPI currency code..</param>
        /// <param name="balance">Value of the current total currency balance on the exchange..</param>
        /// <param name="available">Value of the current available currency balance on the exchange that can be used as collateral..</param>
        /// <param name="locked">Value of the current locked currency balance by the exchange..</param>
        /// <param name="lastUpdatedBy">Source of the last modification. .</param>
        /// <param name="rateUsd">Current exchange rate to the USD for the single unit of the currency. .</param>
        /// <param name="traded">Value of the current total traded..</param>
        public BalanceData(string assetIdExchange = default(string), string assetIdCoinapi = default(string), float balance = default(float), float available = default(float), float locked = default(float), LastUpdatedByEnum? lastUpdatedBy = default(LastUpdatedByEnum?), float rateUsd = default(float), float traded = default(float))
        {
            this.AssetIdExchange = assetIdExchange;
            this.AssetIdCoinapi = assetIdCoinapi;
            this.Balance = balance;
            this.Available = available;
            this.Locked = locked;
            this.LastUpdatedBy = lastUpdatedBy;
            this.RateUsd = rateUsd;
            this.Traded = traded;
        }

        /// <summary>
        /// Exchange currency code.
        /// </summary>
        /// <value>Exchange currency code.</value>
        [DataMember(Name="asset_id_exchange", EmitDefaultValue=false)]
        public string AssetIdExchange { get; set; }

        /// <summary>
        /// CoinAPI currency code.
        /// </summary>
        /// <value>CoinAPI currency code.</value>
        [DataMember(Name="asset_id_coinapi", EmitDefaultValue=false)]
        public string AssetIdCoinapi { get; set; }

        /// <summary>
        /// Value of the current total currency balance on the exchange.
        /// </summary>
        /// <value>Value of the current total currency balance on the exchange.</value>
        [DataMember(Name="balance", EmitDefaultValue=false)]
        public float Balance { get; set; }

        /// <summary>
        /// Value of the current available currency balance on the exchange that can be used as collateral.
        /// </summary>
        /// <value>Value of the current available currency balance on the exchange that can be used as collateral.</value>
        [DataMember(Name="available", EmitDefaultValue=false)]
        public float Available { get; set; }

        /// <summary>
        /// Value of the current locked currency balance by the exchange.
        /// </summary>
        /// <value>Value of the current locked currency balance by the exchange.</value>
        [DataMember(Name="locked", EmitDefaultValue=false)]
        public float Locked { get; set; }


        /// <summary>
        /// Current exchange rate to the USD for the single unit of the currency. 
        /// </summary>
        /// <value>Current exchange rate to the USD for the single unit of the currency. </value>
        [DataMember(Name="rate_usd", EmitDefaultValue=false)]
        public float RateUsd { get; set; }

        /// <summary>
        /// Value of the current total traded.
        /// </summary>
        /// <value>Value of the current total traded.</value>
        [DataMember(Name="traded", EmitDefaultValue=false)]
        public float Traded { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BalanceData {\n");
            sb.Append("  AssetIdExchange: ").Append(AssetIdExchange).Append("\n");
            sb.Append("  AssetIdCoinapi: ").Append(AssetIdCoinapi).Append("\n");
            sb.Append("  Balance: ").Append(Balance).Append("\n");
            sb.Append("  Available: ").Append(Available).Append("\n");
            sb.Append("  Locked: ").Append(Locked).Append("\n");
            sb.Append("  LastUpdatedBy: ").Append(LastUpdatedBy).Append("\n");
            sb.Append("  RateUsd: ").Append(RateUsd).Append("\n");
            sb.Append("  Traded: ").Append(Traded).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as BalanceData);
        }

        /// <summary>
        /// Returns true if BalanceData instances are equal
        /// </summary>
        /// <param name="input">Instance of BalanceData to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BalanceData input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AssetIdExchange == input.AssetIdExchange ||
                    (this.AssetIdExchange != null &&
                    this.AssetIdExchange.Equals(input.AssetIdExchange))
                ) && 
                (
                    this.AssetIdCoinapi == input.AssetIdCoinapi ||
                    (this.AssetIdCoinapi != null &&
                    this.AssetIdCoinapi.Equals(input.AssetIdCoinapi))
                ) && 
                (
                    this.Balance == input.Balance ||
                    (this.Balance != null &&
                    this.Balance.Equals(input.Balance))
                ) && 
                (
                    this.Available == input.Available ||
                    (this.Available != null &&
                    this.Available.Equals(input.Available))
                ) && 
                (
                    this.Locked == input.Locked ||
                    (this.Locked != null &&
                    this.Locked.Equals(input.Locked))
                ) && 
                (
                    this.LastUpdatedBy == input.LastUpdatedBy ||
                    (this.LastUpdatedBy != null &&
                    this.LastUpdatedBy.Equals(input.LastUpdatedBy))
                ) && 
                (
                    this.RateUsd == input.RateUsd ||
                    (this.RateUsd != null &&
                    this.RateUsd.Equals(input.RateUsd))
                ) && 
                (
                    this.Traded == input.Traded ||
                    (this.Traded != null &&
                    this.Traded.Equals(input.Traded))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.AssetIdExchange != null)
                    hashCode = hashCode * 59 + this.AssetIdExchange.GetHashCode();
                if (this.AssetIdCoinapi != null)
                    hashCode = hashCode * 59 + this.AssetIdCoinapi.GetHashCode();
                if (this.Balance != null)
                    hashCode = hashCode * 59 + this.Balance.GetHashCode();
                if (this.Available != null)
                    hashCode = hashCode * 59 + this.Available.GetHashCode();
                if (this.Locked != null)
                    hashCode = hashCode * 59 + this.Locked.GetHashCode();
                if (this.LastUpdatedBy != null)
                    hashCode = hashCode * 59 + this.LastUpdatedBy.GetHashCode();
                if (this.RateUsd != null)
                    hashCode = hashCode * 59 + this.RateUsd.GetHashCode();
                if (this.Traded != null)
                    hashCode = hashCode * 59 + this.Traded.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
