import Image from 'next/image'
import React from 'react'
import Navbar from '../components/Navbar'
import styles from "../styles/Explore.module.css"

const Explore = () => {
    return (
        <>

            <div className="container-fluid">

                <Navbar />

            </div>


            <div className="container">

                <div className={styles.textdiv}>
                    <h1>COURSES</h1>

                    <hr className={styles.explorehr1} />

                    <p>Explore a wide range of courses for FREE while you are taking a break !! </p>
                </div>

                <div className="row">

                    <div className="col-md-4">

                        <div className={styles.coursecard}>

                            <Image src="https://d1aettbyeyfilo.cloudfront.net/kunalk/24509869_1638700184z1vjava-logo-1.webp" className={styles.logoimg} width={500} height={350} alt="c1" />

                            <div className={styles.coursetextdiv}>
                                <h3>Data Structures & Algorithms in Java</h3>
                                <span>Interview preparation</span>
                                <p>Get interview-ready with this course that has no prerequisites and is designed to make you an expert in solving easy to hard LeetCode problems with ease.</p>
                            </div>

                        </div>


                    </div>
                    <div className="col-md-4">
                        <div className={styles.coursecard}>

                            <Image src="https://d1aettbyeyfilo.cloudfront.net/kunalk/unsplash_1638702031.webp" className={styles.logoimg} width={500} height={350} alt="c1" />

                            <div className={styles.coursetextdiv}>
                                <h3>Git & GitHub</h3>
                                <span>Essentials</span>
                                <p>Kick-off your Open Source journey with the complete Git & GitHub tutorial covering all the fundamentals and advance concepts with a hands-on approach.</p>
                            </div>

                        </div>
                    </div>
                    <div className="col-md-4">
                        <div className={styles.coursecard}>

                            <Image src="https://d1aettbyeyfilo.cloudfront.net/kunalk/unsplash_1638700859.webp" className={styles.logoimg} width={500} height={350} alt="c1" />

                            <div className={styles.coursetextdiv}>
                                <h3>
                                    DevOps</h3>
                                <span>Learn in-demand skills</span>
                                <p>Without a doubt, DevOps engineer is the most in-demand role in the current market, especially with an increased number of high paying remote opportunities.</p>
                            </div>

                        </div>
                    </div>
                </div>

                <div className="row" style={{ marginBottom: "5rem" }}>

                    <div className="col-md-4">

                        <div className={styles.coursecard}>

                            <Image src="https://d1aettbyeyfilo.cloudfront.net/kunalk/24509906_1638700371sB81Y5S3wOm52_4iYusUagbEtw.webp" className={styles.logoimg} width={500} height={350} alt="c1" />

                            <div className={styles.coursetextdiv}>
                                <h3>Full stack Web Development</h3>
                                <span>Interview preparation</span>
                                <p>Get interview-ready with this course that has no prerequisites and is designed to make you an expert in solving easy to hard LeetCode problems with ease.</p>
                            </div>

                        </div>


                    </div>
                    <div className="col-md-4">
                        <div className={styles.coursecard}>

                            <Image src="https://d1aettbyeyfilo.cloudfront.net/kunalk/unsplash_1638700770.webp" className={styles.logoimg} width={500} height={350} alt="c1" />

                            <div className={styles.coursetextdiv}>
                                <h3>Python</h3>
                                <span>Essentials</span>
                                <p>Kick-off your Open Source journey with the complete Git & GitHub tutorial covering all the fundamentals and advance concepts with a hands-on approach.</p>
                            </div>

                        </div>
                    </div>
                    <div className="col-md-4">
                        <div className={styles.coursecard}>

                            <Image src="https://d1aettbyeyfilo.cloudfront.net/kunalk/unsplash_1638700745.webp" className={styles.logoimg} width={500} height={350} alt="c1" />

                            <div className={styles.coursetextdiv}>
                                <h3>
                                    Machine Learning</h3>
                                <span>Learn in-demand skills</span>
                                <p>Without a doubt, DevOps engineer is the most in-demand role in the current market, especially with an increased number of high paying remote opportunities.</p>
                            </div>

                        </div>
                    </div>
                </div>
            </div>




        </>
    )
}

export default Explore

{/* <div className={`container-fluid ${styles.card_parent}`}>

<div
    className={styles.hackathon_card}
    style={{
        backgroundImage: `linear-gradient(  rgba(0,0,0,0.375) 75%), url('https://d1aettbyeyfilo.cloudfront.net/kunalk/24509869_1638700184z1vjava-logo-1.webp')`,
        backgroundSize: "cover",
        backgroundPosition: "center",
    }}

>


    <div className={styles.text_div}>
        <h4>
            Data Structures & Algorithms in Java </h4>

        <h3>
            Get interview-ready with this course that has no prerequisites and is designed to make you an expert in solving easy to hard LeetCode problems with ease.
        </h3>
    </div>
</div>


</div> */}