import React from 'react'

function Hero() {
  return (
    <main className='flex items-center'>
        <div className='p-10'>
            <h1 className='text-8xl font-extrabold pb-5 text-left'>
                YOUR FEET 
                <br />
                DESERVE 
                <br/>
                THE BEST
            </h1>
            <p className='font-bold text-left text-slate-500'>YOUR FEET DESERVE THE BEST AND WE’RE HERE TO 
            <br />HELP YOU WITH OUR SHOES.YOUR FEET DESERVE <br /> THE BEST AND WE’RE HERE TO HELP YOU WITH OUR SHOES.
            </p>
            
            <div className='font-bold text-left pt-6 gap-3'>
                <button className='bg-red-600 px-7 py-2 rounded-xl text-white mr-5 hover:bg-red-700'>Shop Now</button>
                <button className='bg-blue-600 px-7 py-2 rounded-xl text-white hover:bg-blue-700'>Category</button>
            </div>

            <div className='text-left mt-4 '>
                <p className='mb-4'>Also available on</p>

                <div className='flex'>
                    <img className='pr-3 cursor-pointer' src="/images/amazon.png" alt="amazon logo" />
                    <img className='cursor-pointer' src="/images/flipkart.png" alt="flipkart logo" />
                </div>
            </div>
        </div>
        <div>
            <img src="/images/hero-image.png" alt="Shoe Pic" />
        </div>
    </main>
  )
}

export default Hero